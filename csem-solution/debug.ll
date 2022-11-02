; ModuleID = 'QuadReader'
source_filename = "QuadReader"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@0 = private unnamed_addr constant [5 x i8] c"i:%d\00", align 1

declare i32 @printf(i8*, ...)

declare void @exit(i32)

declare i32 @getchar()

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 3, i32* %i, align 4
  %t5 = load i32, i32* %i, align 4
  %t7 = icmp ne i32 %t5, 0
  br i1 %t7, label %L1, label %L3

L1:                                               ; preds = %entry
  %t9 = load i32, i32* %i, align 4
  %t11 = icmp slt i32 %t9, 999
  br i1 %t11, label %L2, label %L3

L3:                                               ; preds = %L2, %L1, %entry
  ret i32 0

L2:                                               ; preds = %L1
  %t14 = load i32, i32* %i, align 4
  %t16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @0, i32 0, i32 0), i32 %t14)
  br label %L3
}
