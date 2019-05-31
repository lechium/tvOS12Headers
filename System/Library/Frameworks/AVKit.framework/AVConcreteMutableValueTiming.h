/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVMutableValueTiming.h>

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(CGSize)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(void)setAnchorValue:(double)arg1 ;
-(void)setAnchorTimeStamp:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
@end

