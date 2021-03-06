/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKMediaEntityServer, NSError, TVHSAsynchronousWorkToken;

@interface TVHKMediaEntityServerOperation : TVHSAsynchronousOperation {

	TVHKMediaEntityServer* _mediaEntityServer;
	NSError* _error;
	TVHSAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) TVHKMediaEntityServer * mediaEntityServer;               //@synthesize mediaEntityServer=_mediaEntityServer - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVHSAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
-(TVHKMediaEntityServer *)mediaEntityServer;
-(void)setMediaEntityServer:(TVHKMediaEntityServer *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(id)init;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setAsyncWorkToken:(TVHSAsynchronousWorkToken *)arg1 ;
-(TVHSAsynchronousWorkToken *)asyncWorkToken;
@end

