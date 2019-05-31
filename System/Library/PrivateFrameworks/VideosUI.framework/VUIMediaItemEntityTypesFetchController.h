/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaLibraryFetchController.h>

@protocol VUIMediaItemEntityTypesFetchControllerDelegate;
@class VUIMediaItemEntityTypesFetchResponse;

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController {

	id<VUIMediaItemEntityTypesFetchControllerDelegate> _delegate;
	VUIMediaItemEntityTypesFetchResponse* _response;

}

@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;                                 //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaItemEntityTypesFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)setDelegate:(id<VUIMediaItemEntityTypesFetchControllerDelegate>)arg1 ;
-(id<VUIMediaItemEntityTypesFetchControllerDelegate>)delegate;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)cancelFetch;
-(BOOL)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2 ;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)_fetchOperationForFetchReason:(long long)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg1 ;
-(void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_notifyFetchDidCompleteWithResult:(id)arg1 ;
-(void)_notifyFetchDidFailWithError:(id)arg1 ;
@end

