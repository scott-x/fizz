package main

import (
	_ "fmt"
	"github.com/scott-x/gutils/fs"
	"log"
	"strings"
)

const (
	INCLUDE_DIR = "/usr/local/include/fizz"
	LIB_DIR     = "/usr/local/lib"
	DYLIB_FIZZ  = "src/libfizz.dylib"
)

var dylib_fizz_des = LIB_DIR + "/" + strings.Split(DYLIB_FIZZ, "/")[1]

var header = map[string]string{
	"cmd.h":   "src/cmd/cmd.h",
	"color.h": "src/cl/color.h",
	"db.h":    "src/db/db.h",
	"excel.h": "src/excel/excel.h",
	"fs.h":    "src/fs/fs.h",
	"sql.h":   "src/parse/sql.h",
	"reg.h":   "src/reg/reg.h",
	"str.h":   "src/str/str.h",
	"time.h":  "src/t/time.h",
	"fizz.h":  "src/fizz.h",
}

func main() {
	if !fs.IsExist(DYLIB_FIZZ) {
		log.Println("dynamic lib for fizz not found...")
		return
	}
	// uninstall
	uninstall()

	//install
	install()
}

func uninstall() {
	if fs.IsExist(INCLUDE_DIR) {
		fs.RemoveAll(INCLUDE_DIR)
	}

	if fs.IsExist(dylib_fizz_des) {
		fs.RemoveAll(dylib_fizz_des)
	}
}

func install() {
	fs.CreateDirIfNotExist(INCLUDE_DIR)
	for h, des := range header {
		fs.CopyFile(des, INCLUDE_DIR+"/"+h)
	}
	fs.CopyFile(DYLIB_FIZZ, dylib_fizz_des)
}
