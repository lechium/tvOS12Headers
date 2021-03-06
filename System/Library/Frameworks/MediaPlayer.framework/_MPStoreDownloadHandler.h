/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownloadHandler.h>

@class NSString;

@interface _MPStoreDownloadHandler : SSDownloadHandler {

	BOOL _skipInstall;
	NSString* _downloadFilePath;

}

@property (nonatomic,copy) NSString * downloadFilePath;              //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (assign,nonatomic) BOOL skipInstall;                       //@synthesize skipInstall=_skipInstall - In the implementation block
-(void)setSkipInstall:(BOOL)arg1 ;
-(NSString *)downloadFilePath;
-(BOOL)skipInstall;
-(void)setDownloadFilePath:(NSString *)arg1 ;
@end

