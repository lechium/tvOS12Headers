/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject {

	MRImage* image;
	CGRect rect;
	CGRect innerRect;
	CGRect outerRect;
	NSString* where;
	BOOL ignoreBlend;
	MRPictureFrameRenderable* next;

}

@property (nonatomic,retain) MRImage * image; 
@property (nonatomic,copy) NSString * where; 
+(SCD_Struct_MR15*)poolInfo;
-(NSString *)where;
-(void)setWhere:(NSString *)arg1 ;
-(void)dealloc;
-(void)setImage:(MRImage *)arg1 ;
-(MRImage *)image;
-(void)purge;
@end

