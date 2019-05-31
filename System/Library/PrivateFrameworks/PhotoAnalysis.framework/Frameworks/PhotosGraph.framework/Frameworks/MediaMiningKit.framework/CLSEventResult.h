/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSEvent;

@interface CLSEventResult : NSObject {

	float _confidence;
	CLSEvent* _event;

}

@property (nonatomic,retain) CLSEvent * event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2 ;
-(BOOL)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
-(id)description;
-(CLSEvent *)event;
-(void)setEvent:(CLSEvent *)arg1 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
@end
