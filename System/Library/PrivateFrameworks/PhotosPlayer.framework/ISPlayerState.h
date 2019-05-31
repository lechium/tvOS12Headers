/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ISPlayerState : NSObject {

	NSString* _diagnosticLabel;
	double _photoBlurRadius;
	double _videoAlpha;
	double _videoBlurRadius;

}

@property (nonatomic,readonly) NSString * diagnosticLabel;              //@synthesize diagnosticLabel=_diagnosticLabel - In the implementation block
@property (nonatomic,readonly) double photoBlurRadius;                  //@synthesize photoBlurRadius=_photoBlurRadius - In the implementation block
@property (nonatomic,readonly) double videoAlpha;                       //@synthesize videoAlpha=_videoAlpha - In the implementation block
@property (nonatomic,readonly) double videoBlurRadius;                  //@synthesize videoBlurRadius=_videoBlurRadius - In the implementation block
+(id)outputInfoWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(double)videoAlpha;
-(NSString *)diagnosticLabel;
-(double)photoBlurRadius;
-(double)videoBlurRadius;
-(id)description;
@end
