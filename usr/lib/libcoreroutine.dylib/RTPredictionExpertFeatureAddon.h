/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate;

@interface RTPredictionExpertFeatureAddon : NSObject {

	NSPredicate* _eventFilterPredicate;

}

@property (nonatomic,readonly) NSPredicate * eventFilterPredicate;              //@synthesize eventFilterPredicate=_eventFilterPredicate - In the implementation block
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)eventFilterPredicate;
-(long long)addonType;
@end
