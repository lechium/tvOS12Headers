/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue, OS_os_activity;
@class GEODataRequest, NSData, GEODataSessionTask, NSString, NSObject, GEOClientMetrics, GEODataSession, NSURL;

@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate> {

	GEODataRequest* _request;
	NSData* _data;
	GEODataSessionTask* _task;
	NSString* _responseEtag;
	GEOTileKey _key;
	NSString* _editionHeader;
	_GEOSimpleTileRequesterOperation* _baseTile;
	_GEOSimpleTileRequesterOperation* _localizationTile;
	id<GEOSimpleTileRequesterOperationDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_os_activity> _parentTileActivity;
	double _timeout;
	double _startTime;
	GEOClientMetrics* _clientMetrics;
	int _attempts;
	int _checksumMethod;
	unsigned _tileEdition;
	BOOL _finished;
	BOOL _existingCachedDataCurrent;
	AI _priority;
	GEODataSession* _dataSession;
	unsigned long long _signpostID;

}

@property (nonatomic,readonly) GEODataRequest * request;                                                       //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                                                    //@synthesize signpostID=_signpostID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;                                               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> parentTileActivity;                                     //@synthesize parentTileActivity=_parentTileActivity - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign) unsigned priority; 
@property (nonatomic,retain) NSData * data;                                                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * responseEtag;                                                          //@synthesize responseEtag=_responseEtag - In the implementation block
@property (nonatomic,retain) GEODataSessionTask * task;                                                        //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) BOOL responseIsCacheable; 
@property (nonatomic,retain) NSString * editionHeader;                                                         //@synthesize editionHeader=_editionHeader - In the implementation block
@property (nonatomic,retain) _GEOSimpleTileRequesterOperation * baseTile;                                      //@synthesize baseTile=_baseTile - In the implementation block
@property (nonatomic,retain) _GEOSimpleTileRequesterOperation * localizationTile;                              //@synthesize localizationTile=_localizationTile - In the implementation block
@property (nonatomic,retain) GEODataSession * dataSession;                                                     //@synthesize dataSession=_dataSession - In the implementation block
@property (nonatomic,readonly) long long responseSource; 
@property (assign) GEOTileKey key;                                                                             //@synthesize key=_key - In the implementation block
@property (assign) unsigned tileEdition;                                                                       //@synthesize tileEdition=_tileEdition - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics;                                                 //@synthesize clientMetrics=_clientMetrics - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) int httpResponseStatusCode; 
@property (getter=isExistingCachedDataCurrent,nonatomic,readonly) BOOL existingCachedDataCurrent;              //@synthesize existingCachedDataCurrent=_existingCachedDataCurrent - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOSimpleTileRequesterOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)editionHeader;
-(id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)setEditionHeader:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setParentTileActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)setDataSession:(GEODataSession *)arg1 ;
-(void)setLocalizationTile:(_GEOSimpleTileRequesterOperation *)arg1 ;
-(void)setBaseTile:(_GEOSimpleTileRequesterOperation *)arg1 ;
-(double)timeout;
-(GEODataSession *)dataSession;
-(NSObject*<OS_os_activity>)parentTileActivity;
-(void)clearAllRelatedOperations;
-(_GEOSimpleTileRequesterOperation *)baseTile;
-(_GEOSimpleTileRequesterOperation *)localizationTile;
-(BOOL)finished;
-(BOOL)responseIsCacheable;
-(NSString *)responseEtag;
-(unsigned)tileEdition;
-(unsigned long long)contentLength;
-(GEOClientMetrics *)clientMetrics;
-(int)httpResponseStatusCode;
-(BOOL)isExistingCachedDataCurrent;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(long long)responseSource;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setTask:(GEODataSessionTask *)arg1 ;
-(void)setResponseEtag:(NSString *)arg1 ;
-(void)taskFailed:(id)arg1 withError:(id)arg2 ;
-(BOOL)validateTileIntegrityForTask:(id)arg1 ;
-(double)elapsed;
-(void)_reportNetworkError:(id)arg1 ;
-(void)setTileEdition:(unsigned)arg1 ;
-(id)init;
-(NSString *)description;
-(id<GEOSimpleTileRequesterOperationDelegate>)delegate;
-(void)setPriority:(unsigned)arg1 ;
-(unsigned)priority;
-(double)startTime;
-(GEOTileKey)key;
-(void)cancel;
-(void)start;
-(NSURL *)URL;
-(GEODataRequest *)request;
-(NSData *)data;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setKey:(GEOTileKey)arg1 ;
-(GEODataSessionTask *)task;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_os_activity>)activity;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
@end

