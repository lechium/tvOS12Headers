/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLMultiArray.h>

@class MLMultiArray;

@interface MLMultiArrayView : MLMultiArray {

	MLMultiArray* _parent;

}

@property (nonatomic,readonly) MLMultiArray * parent;              //@synthesize parent=_parent - In the implementation block
+(BOOL)isSqueezableShape:(id)arg1 ;
+(void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id*)arg3 resultingStrides:(id*)arg4 ;
+(BOOL)isSqueezableShape:(id)arg1 dimensions:(id)arg2 ;
-(id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(BOOL)arg4 error:(id*)arg5 ;
-(id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id*)arg3 ;
-(MLMultiArray *)parent;
@end

