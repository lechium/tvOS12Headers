/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm {

	NSData* _rand;

}

@property (nonatomic,retain) NSData * rand;              //@synthesize rand=_rand - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)rand;
-(void)setRand:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

