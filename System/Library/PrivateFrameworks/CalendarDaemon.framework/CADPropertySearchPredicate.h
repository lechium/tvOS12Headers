/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class NSArray, CADObjectID, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKDefaultPropertiesLoading> {

	int _entityType;
	NSArray* _filters;
	CADObjectID* _calendarID;
	CADObjectID* _sourceID;

}

@property (nonatomic,readonly) int entityType;                        //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                     //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) CADObjectID * calendarID;              //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) CADObjectID * sourceID;                //@synthesize sourceID=_sourceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3 source:(id)arg4 ;
-(id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2 ;
-(id)defaultPropertiesToLoad;
-(CADObjectID *)calendarID;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3 ;
-(CADObjectID *)sourceID;
-(int)entityType;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)filters;
-(BOOL)validate;
@end

