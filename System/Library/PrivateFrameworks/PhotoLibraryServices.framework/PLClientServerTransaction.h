/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface PLClientServerTransaction : NSObject {

	NSString* _transactionToken;
	NSSet* _changeScopes;

}

@property (nonatomic,copy) NSString * transactionToken;                  //@synthesize transactionToken=_transactionToken - In the implementation block
@property (nonatomic,retain,readonly) NSSet * changeScopes;              //@synthesize changeScopes=_changeScopes - In the implementation block
+(id)beginClientTransactionWithChangeScopes:(id)arg1 ;
+(id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2 ;
+(id)transactionFromUserInfo:(id)arg1 ;
+(void)addTransaction:(id)arg1 toUserInfo:(id)arg2 ;
+(void)removeTransactionFromUserInfo:(id)arg1 ;
+(void)addTokenForTransaction:(id)arg1 toXPCDictionary:(id)arg2 ;
+(id)_fileManager;
+(unsigned long long)scopeValuesFromScopes:(id)arg1 ;
+(id)_filePathForTransactionWithToken:(id)arg1 ;
+(id)_transactionsDirectory;
+(id)_scopeValuesByScope;
+(id)serverTransactionQueue;
+(id)_recoveryHistoryFilePath;
+(BOOL)_hasExcessiveRecoveryAttempts;
+(BOOL)_archiveRecoveryHistoryWithError:(id*)arg1 ;
+(unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1 ;
+(id)_allTransactionPaths;
+(BOOL)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long*)arg2 ;
+(id)scopesFromScopeValues:(unsigned long long)arg1 ;
+(id)_outstandingTransactionScopesByPath;
+(void)_recordRecoveryAttempt;
+(void)_checkForAndHandleExcessiveRecoveryAttempts;
+(void)handleOutstandingTransactions:(/*^block*/id)arg1 ;
+(void)addScopesForTransaction:(id)arg1 toXPCDictionary:(id)arg2 ;
+(id)transactionTokenFromXPCDictionary:(id)arg1 ;
+(id)changeScopesFromXPCDictionary:(id)arg1 ;
+(id)descriptionOfAllTransactionFiles;
-(void)stillAlive;
-(void)completeTransactionScope:(id)arg1 ;
-(NSString *)transactionToken;
-(void)completeTransaction;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(void)abortTransaction;
-(NSSet *)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(void)setTransactionToken:(NSString *)arg1 ;
-(void)dealloc;
@end

