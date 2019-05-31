/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@protocol TVHKContributorImageLoadOperationDelegate;
@class NSURL, NSOperation;

@interface TVHKContributorImageLoadOperation : TVHKImageLoadParamsOperation {

	NSURL* _imageURL;
	id<TVHKContributorImageLoadOperationDelegate> _delegate;
	NSOperation* _imageLoadOperation;

}

@property (nonatomic,copy) NSURL * imageURL;                                                             //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic,__weak) id<TVHKContributorImageLoadOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperation * imageLoadOperation;                                           //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)executionDidBegin;
-(id)_contributorImageLoadParams;
-(void)_startURLImageLoadOperationWithTemplateURLString:(id)arg1 ;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setDelegate:(id<TVHKContributorImageLoadOperationDelegate>)arg1 ;
-(id<TVHKContributorImageLoadOperationDelegate>)delegate;
-(void)cancel;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(NSOperation *)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation *)arg1 ;
@end

