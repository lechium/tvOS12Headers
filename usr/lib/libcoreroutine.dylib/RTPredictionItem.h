/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTPredictionItem : NSObject <NSCopying> {

	double _confidence;

}

@property (nonatomic,readonly) double confidence;              //@synthesize confidence=_confidence - In the implementation block
-(id)initWithConfidence:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)confidence;
@end

