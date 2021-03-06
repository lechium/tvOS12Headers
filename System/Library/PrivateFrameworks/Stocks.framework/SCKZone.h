/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCKZoneStore;
@class SCKZoneSchema, NSArray, SCKZoneDiff;

@interface SCKZone : NSObject {

	SCKZoneSchema* _schema;
	id<SCKZoneStore> _store;

}

@property (nonatomic,retain) id<SCKZoneStore> store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) SCKZoneSchema * schema;                     //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientRecords; 
@property (nonatomic,copy,readonly) SCKZoneDiff * clientDiff; 
@property (nonatomic,readonly) BOOL needsFirstSync; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
-(BOOL)isDirty;
-(id<SCKZoneStore>)store;
-(SCKZoneDiff *)clientDiff;
-(id)initWithSchema:(id)arg1 store:(id)arg2 ;
-(NSArray *)clientRecords;
-(BOOL)needsFirstSync;
-(void)setStore:(id<SCKZoneStore>)arg1 ;
-(SCKZoneSchema *)schema;
@end

