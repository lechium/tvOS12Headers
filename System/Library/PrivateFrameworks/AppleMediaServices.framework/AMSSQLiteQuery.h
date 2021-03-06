/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

@interface AMSSQLiteQuery : NSObject {

	AMSSQLiteConnection* _connection;
	AMSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) AMSSQLiteConnection * connection; 
@property (readonly) AMSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(BOOL)deleteAllEntities;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyEntityIdentifiers;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(AMSSQLiteQueryDescriptor *)queryDescriptor;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)countOfEntities;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(id)initOnConnection:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(id)arg2 ;
-(AMSSQLiteConnection *)connection;
@end

