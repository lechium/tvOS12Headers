/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber;

@interface DEDCloudKitAttachment : NSObject {

	NSURL* _url;
	NSNumber* _fileSize;

}

@property (retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (retain) NSNumber * fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
@end

