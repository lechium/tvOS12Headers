/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSSQLiteConnectionDelegate;
#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSMutableArray, NSMapTable, AMSSQLiteConnectionOptions, NSError;

@interface AMSSQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<AMSSQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	AMSSQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) AMSSQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<AMSSQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_open;
-(BOOL)_close;
-(NSError *)currentError;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(void)_finalizeAllStatements;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(long long)lastChangeCount;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(BOOL)_performResetAfterCorruptionError;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(BOOL)truncate;
-(BOOL)executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_openAndAllowRetry:(BOOL)arg1 ;
-(BOOL)_executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_resetAfterCorruptionError;
-(BOOL)_resetAfterIOError;
-(BOOL)finalizePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<AMSSQLiteConnectionDelegate>)arg1 ;
-(id<AMSSQLiteConnectionDelegate>)delegate;
-(AMSSQLiteConnectionOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)open;
-(BOOL)close;
@end

