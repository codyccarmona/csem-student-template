; ModuleID = 'test1.ll'
source_filename = "QuadReader"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@m = common global [6 x i32] zeroinitializer, align 16
@0 = private unnamed_addr constant [6 x i8] c"m[%d]\00", align 1
@1 = private unnamed_addr constant [7 x i8] c" = %d\0A\00", align 1
@2 = private unnamed_addr constant [22 x i8] c"scale factor is zero\0A\00", align 1

declare i32 @printf(i8*, ...)

declare void @exit(i32)

declare i32 @getchar()

define i32 @scale(i32 %x) {
entry:
  %t4 = icmp eq i32 %x, 0
  br i1 %t4, label %L1, label %L2

L1:                                               ; preds = %entry
  ret i32 0

L2:                                               ; preds = %entry
  br label %L3

L3:                                               ; preds = %L4, %L2
  %i.0 = phi i32 [ 0, %L2 ], [ %2, %L4 ]
  %t12 = icmp slt i32 %i.0, 6
  br i1 %t12, label %L5, label %L6

L5:                                               ; preds = %L3
  %0 = getelementptr inbounds [6 x i32], [6 x i32]* @m, i32 0, i32 %i.0
  %t24 = load i32, i32* %0, align 4
  %1 = mul i32 %t24, %x
  store i32 %1, i32* %0, align 4
  br label %L4

L6:                                               ; preds = %L3
  ret i32 1

L4:                                               ; preds = %L5
  %2 = add i32 %i.0, 1
  br label %L3
}

define i32 @main() {
entry:
  store i32 0, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 0), align 4
  store i32 1, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 1), align 4
  store i32 2, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 2), align 4
  store i32 3, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 3), align 4
  store i32 4, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 4), align 4
  store i32 5, i32* getelementptr inbounds ([6 x i32], [6 x i32]* @m, i32 0, i32 5), align 4
  %t64 = call i32 @scale(i32 10)
  %t66 = icmp ne i32 %t64, 0
  br i1 %t66, label %L7, label %L12

L7:                                               ; preds = %entry
  br label %L8

L12:                                              ; preds = %entry
  %t94 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @2, i32 0, i32 0))
  br label %L13

L8:                                               ; preds = %L9, %L7
  %i.0 = phi i32 [ 0, %L7 ], [ %1, %L9 ]
  %t73 = icmp slt i32 %i.0, 6
  br i1 %t73, label %L10, label %L11

L10:                                              ; preds = %L8
  %t83 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @0, i32 0, i32 0), i32 %i.0)
  %0 = getelementptr inbounds [6 x i32], [6 x i32]* @m, i32 0, i32 %i.0
  %t89 = load i32, i32* %0, align 4
  %t91 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @1, i32 0, i32 0), i32 %t89)
  br label %L9

L11:                                              ; preds = %L8
  br label %L13

L9:                                               ; preds = %L10
  %1 = add i32 %i.0, 1
  br label %L8

L13:                                              ; preds = %L11, %L12
  ret i32 0
}
