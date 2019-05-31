/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate;

@interface RESessionRelevanceProvider : RERelevanceProvider {

	BOOL _historic;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (getter=isHistoric,nonatomic,readonly) BOOL historic;              //@synthesize historic=_historic - In the implementation block
+(id)relevanceSimulatorID;
+(id)_simulationDateFormatter;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)dictionaryEncoding;
-(BOOL)isHistoric;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(BOOL)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
@end

