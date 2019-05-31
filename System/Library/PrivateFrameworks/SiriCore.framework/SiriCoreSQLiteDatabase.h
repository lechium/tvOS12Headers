/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriCore/SiriCore-Structs.h>
@class NSCache, NSString;

@interface SiriCoreSQLiteDatabase : NSObject {

	sqlite3Ref _handle;
	NSCache* _cachedSQLiteStatementsByQueryString;
	NSString* _path;
	long long _dataProtectionClass;
	long long _options;

}

@property (nonatomic,copy,readonly) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,readonly) long long options;                          //@synthesize options=_options - In the implementation block
-(long long)dataProtectionClass;
-(id)executeQuery:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)executeQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 dataProtectionClass:(long long)arg2 options:(long long)arg3 ;
-(BOOL)executeQueryString:(id)arg1 error:(id*)arg2 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)savepointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseSavepointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)rollbackToSavepointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)vacuumWithError:(id*)arg1 ;
-(BOOL)performForeignKeyCheckWithError:(id*)arg1 ;
-(BOOL)performIntegrityCheckWithError:(id*)arg1 ;
-(BOOL)performQuickCheckWithError:(id*)arg1 ;
-(id)fetchTableNamesWithError:(id*)arg1 ;
-(id)fetchTableWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)createTable:(id)arg1 error:(id*)arg2 ;
-(BOOL)dropTableWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)alterTableWithName:(id)arg1 renameTo:(id)arg2 error:(id*)arg3 ;
-(BOOL)alterTableWithName:(id)arg1 addColumn:(id)arg2 error:(id*)arg3 ;
-(BOOL)createIndex:(id)arg1 error:(id*)arg2 ;
-(BOOL)dropIndexWithName:(id)arg1 error:(id*)arg2 ;
-(id)selectValueTuplesFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7 ;
-(id)selectValueMapsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7 ;
-(id)selectRecordsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 recordBuilder:(id)arg7 error:(id*)arg8 ;
-(id)selectValuesFromTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7 ;
-(unsigned long long)countValuesInTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 range:(id)arg5 error:(id*)arg6 ;
-(BOOL)insertIntoTableWithName:(id)arg1 valueMap:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertIntoTableWithName:(id)arg1 record:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateTableWithName:(id)arg1 valueMap:(id)arg2 criterion:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 error:(id*)arg3 ;
-(long long)options;
-(NSString *)path;
@end

