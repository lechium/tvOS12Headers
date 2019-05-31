/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEOPlaceDataDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertPhoneNumber;
	sqlite3_stmtRef _sqlInsertKeyString;
	sqlite3_stmtRef _sqlDeleteAllPhoneNumbers;
	sqlite3_stmtRef _sqlDeleteKeyStringForMUID;
	sqlite3_stmtRef _sqlDeletePlaceDataForMUID;

}
-(void)_openIfNecessary;
-(void)performStatementFinalizationTasks;
-(void)performTableCreationTasks;
-(void)performStatementPreparationTasks;
-(void)_setMUID:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2 ;
-(void)setComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)deleteComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)setComponentsFromPlaceData:(id)arg1 ;
-(void)_createPhoneNumberTable;
-(void)_createKeyStringTable;
-(void)deletePlaceDataForMUID:(unsigned long long)arg1 ;
-(void)deletePhoneNumberMapping;
-(void)_populateDBKey:(GEOTileKey*)arg1 forMUID:(unsigned long long)arg2 ;
-(void)flushPendingWritesSynchronously;
-(void)dealloc;
-(void)clear;
-(id)initWithPath:(id)arg1 ;
@end

