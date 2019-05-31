/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MiroAutoEditor, MiroMemory, MiroCloudDownloader, MiroAutoEditController;

@interface MiroAutoEditOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _shouldSave;
	int _requestID;
	MiroAutoEditor* _autoEditorParent;
	MiroMemory* _memory;
	/*^block*/id _cleanupHandler;
	MiroCloudDownloader* _cloudDownloader;
	MiroAutoEditController* _autoEditController;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (retain) MiroAutoEditController * autoEditController;                  //@synthesize autoEditController=_autoEditController - In the implementation block
@property (assign,nonatomic) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (retain) MiroAutoEditor * autoEditorParent;                            //@synthesize autoEditorParent=_autoEditorParent - In the implementation block
@property (retain) MiroMemory * memory;                                          //@synthesize memory=_memory - In the implementation block
@property (copy) id cleanupHandler;                                              //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (assign) BOOL shouldSave;                                              //@synthesize shouldSave=_shouldSave - In the implementation block
-(id)cleanupHandler;
-(void)setCleanupHandler:(id)arg1 ;
-(void)finished;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(int)requestID;
-(BOOL)isAsynchronous;
-(void)setRequestID:(int)arg1 ;
-(void)setShouldSave:(BOOL)arg1 ;
-(MiroCloudDownloader *)cloudDownloader;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(MiroAutoEditor *)autoEditorParent;
-(BOOL)shouldSave;
-(BOOL)shouldDownload;
-(void)performAutoEditAsynchronously;
-(void)_downloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)setAutoEditorParent:(MiroAutoEditor *)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end
