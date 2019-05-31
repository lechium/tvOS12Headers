/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface TVDurationValueTransformer : NSValueTransformer {

	NSDateComponentsFormatter* _minutesFormatter;
	NSDateComponentsFormatter* _secondsFormatter;

}

@property (nonatomic,retain) NSDateComponentsFormatter * minutesFormatter;              //@synthesize minutesFormatter=_minutesFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * secondsFormatter;              //@synthesize secondsFormatter=_secondsFormatter - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
+(void)load;
-(id)transformedValue:(id)arg1 ;
-(NSDateComponentsFormatter *)secondsFormatter;
-(NSDateComponentsFormatter *)minutesFormatter;
-(void)setMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setSecondsFormatter:(NSDateComponentsFormatter *)arg1 ;
-(id)init;
@end

