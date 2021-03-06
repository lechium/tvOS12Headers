/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCPClassification : NSObject {

	float _duration;
	float _sumConfidence;
	NSString* _sceneId;

}

@property (retain) NSString * sceneId;               //@synthesize sceneId=_sceneId - In the implementation block
@property (assign) float duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign) float sumConfidence;              //@synthesize sumConfidence=_sumConfidence - In the implementation block
-(id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 ;
-(NSString *)sceneId;
-(void)setSceneId:(NSString *)arg1 ;
-(float)sumConfidence;
-(void)setSumConfidence:(float)arg1 ;
-(void)setDuration:(float)arg1 ;
-(float)duration;
@end

