/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSLogPersistenceDelegate;
#import <LoggingSupport/LoggingSupport-Structs.h>
@class _OSLogCollectionReference, _OSLogVersioning, _OSLogIndex, NSURL, NSCompoundPredicate, NSString, NSDate, NSDictionary;

@interface OSLogPersistence : NSObject {

	_OSLogCollectionReference* _oslcr;
	_OSLogVersioning* _version;
	_OSLogIndex* _index;
	BOOL _verbose;
	NSURL* _logFile;
	NSURL* _logArchive;
	id<OSLogPersistenceDelegate> _delegate;
	NSCompoundPredicate* _predicate;
	unsigned long long _batchSize;
	unsigned long long _options;
	NSString* _currentFile;
	NSDate* _startDate;
	NSDate* _sparseDataStart;
	NSDate* _endDate;
	unsigned long long _decodeFailures;
	unsigned long long _messagesFiltered;
	unsigned long long _logMessageCount;

}

@property (nonatomic,retain,readonly) NSDictionary * statistics; 
@property (nonatomic,readonly) os_timesync_db_sRef timesync; 
@property (nonatomic,copy) NSURL * logFile;                                             //@synthesize logFile=_logFile - In the implementation block
@property (nonatomic,copy) NSURL * logArchive;                                          //@synthesize logArchive=_logArchive - In the implementation block
@property (assign,nonatomic,__weak) id<OSLogPersistenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSCompoundPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                              //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long archiveState; 
@property (nonatomic,readonly) long long archiveVersion; 
@property (nonatomic,copy,readonly) NSString * currentFile;                             //@synthesize currentFile=_currentFile - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sparseDataStart;                           //@synthesize sparseDataStart=_sparseDataStart - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long decodeFailures;                       //@synthesize decodeFailures=_decodeFailures - In the implementation block
@property (nonatomic,readonly) unsigned long long messagesFiltered;                     //@synthesize messagesFiltered=_messagesFiltered - In the implementation block
@property (nonatomic,readonly) unsigned long long logMessageCount;                      //@synthesize logMessageCount=_logMessageCount - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                              //@synthesize verbose=_verbose - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(NSDictionary *)statistics;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(long long)archiveVersion;
-(os_timesync_db_sRef)timesync;
-(void)_openLocalPersistenceDir;
-(void)_openPath:(id)arg1 ;
-(void)_openFiles;
-(void)setLogFile:(NSURL *)arg1 ;
-(BOOL)allowSensitive;
-(long long)archiveState;
-(void)resetWorkingState;
-(BOOL)streamChunks:(/*^block*/id)arg1 andEntries:(/*^block*/id)arg2 flags:(unsigned)arg3 ;
-(void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateFromLastBootWithBlock:(/*^block*/id)arg1 ;
-(NSURL *)logFile;
-(NSString *)currentFile;
-(NSDate *)sparseDataStart;
-(unsigned long long)messagesFiltered;
-(unsigned long long)logMessageCount;
-(void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)setLogArchive:(NSURL *)arg1 ;
-(unsigned long long)decodeFailures;
-(NSURL *)logArchive;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<OSLogPersistenceDelegate>)arg1 ;
-(id<OSLogPersistenceDelegate>)delegate;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPredicate:(NSCompoundPredicate *)arg1 ;
-(NSCompoundPredicate *)predicate;
@end

