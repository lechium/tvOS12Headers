/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaLibrary, NSError, VUIAsynchronousWorkToken;

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation {

	VUIMediaLibrary* _mediaLibrary;
	NSError* _error;
	VUIAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VUIAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(id)init;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)setAsyncWorkToken:(VUIAsynchronousWorkToken *)arg1 ;
-(VUIAsynchronousWorkToken *)asyncWorkToken;
@end

