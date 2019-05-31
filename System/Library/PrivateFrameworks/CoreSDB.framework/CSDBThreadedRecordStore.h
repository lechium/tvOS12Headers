/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSObject, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject {

	CSDBRecordStore* _recordStore;
	NSObject*<OS_dispatch_queue> _recordStoreQueue;
	NSString* _identifier;
	_CSDBThreadObject* _thread;
	BOOL _wantsRegister;

}
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)registerClass:(const SCD_Struct_CS1*)arg1 ;
-(id)initWithIdentifier:(CFStringRef)arg1 qosClass:(unsigned short)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 exclusiveOwnership:(BOOL)arg10 ;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 ;
-(void)teardownDatabase;
-(void)_teardownDatabaseOnQueue;
-(void)dealloc;
@end
