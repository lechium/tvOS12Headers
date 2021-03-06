/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString;

@interface MRPictureFrameInfo : NSObject {

	CGRect rect;
	CGRect tableRect;
	BOOL onTable;
	NSString* aspectRatio;
	BOOL ignoreMatte;
	BOOL useLastFrame;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) CGRect tableRect; 
@property (assign,nonatomic) BOOL onTable; 
@property (nonatomic,copy) NSString * aspectRatio; 
@property (assign,nonatomic) BOOL ignoreMatte; 
@property (assign,nonatomic) BOOL useLastFrame; 
-(NSString *)aspectRatio;
-(void)setAspectRatio:(NSString *)arg1 ;
-(void)dealloc;
@end

