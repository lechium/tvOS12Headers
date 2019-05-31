/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSUUID, NSMutableDictionary;

@interface CKEventMetric : NSObject <NSSecureCoding> {

	BOOL _hasBeenSubmitted;
	BOOL _inferredAllowsCellular;
	BOOL _inferredPreferAnonymousRequests;
	BOOL _isCKInternalMetric;
	BOOL _isPushTriggerFired;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	NSUUID* _metricUUID;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _associatedOperations;
	NSMutableDictionary* _associatedOperationGroups;

}

@property (assign,nonatomic) BOOL hasBeenSubmitted;                                          //@synthesize hasBeenSubmitted=_hasBeenSubmitted - In the implementation block
@property (nonatomic,readonly) NSUUID * metricUUID;                                          //@synthesize metricUUID=_metricUUID - In the implementation block
@property (assign,nonatomic) BOOL inferredAllowsCellular;                                    //@synthesize inferredAllowsCellular=_inferredAllowsCellular - In the implementation block
@property (assign,nonatomic) BOOL inferredPreferAnonymousRequests;                           //@synthesize inferredPreferAnonymousRequests=_inferredPreferAnonymousRequests - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperations;                   //@synthesize associatedOperations=_associatedOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperationGroups;              //@synthesize associatedOperationGroups=_associatedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL isCKInternalMetric;                                        //@synthesize isCKInternalMetric=_isCKInternalMetric - In the implementation block
@property (assign,nonatomic) BOOL isPushTriggerFired;                                        //@synthesize isPushTriggerFired=_isPushTriggerFired - In the implementation block
@property (nonatomic,readonly) NSString * eventName;                                         //@synthesize eventName=_eventName - In the implementation block
@property (retain) NSDate * startTime;                                                       //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * endTime;                                                         //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)generateEventMetricInfo;
-(void)setIsCKInternalMetric:(BOOL)arg1 ;
-(id)initWithEventName:(id)arg1 atTime:(id)arg2 ;
-(BOOL)hasBeenSubmitted;
-(BOOL)inferredAllowsCellular;
-(void)setInferredAllowsCellular:(BOOL)arg1 ;
-(BOOL)inferredPreferAnonymousRequests;
-(void)setInferredPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setHasBeenSubmitted:(BOOL)arg1 ;
-(void)setMetricValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIsPushTriggerFired:(BOOL)arg1 ;
-(id)initWithEventName:(id)arg1 ;
-(BOOL)associateWithCompletedOperation:(id)arg1 ;
-(BOOL)isPushTriggerFired;
-(NSMutableDictionary *)associatedOperationGroups;
-(NSMutableDictionary *)associatedOperations;
-(BOOL)isCKInternalMetric;
-(NSUUID *)metricUUID;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSMutableDictionary *)attributes;
-(NSString *)eventName;
@end

