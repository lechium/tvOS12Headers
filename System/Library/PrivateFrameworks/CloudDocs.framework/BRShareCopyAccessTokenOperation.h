/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyAccessTokenCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (copy) id shareCopyAccessTokenCompletionBlock;              //@synthesize shareCopyAccessTokenCompletionBlock=_shareCopyAccessTokenCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shareCopyAccessTokenCompletionBlock;
-(void)setShareCopyAccessTokenCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)main;
@end

