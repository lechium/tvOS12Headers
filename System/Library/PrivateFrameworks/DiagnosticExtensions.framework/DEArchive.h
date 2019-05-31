/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticExtensions/DiagnosticExtensions-Structs.h>
@class NSURL;

@interface DEArchive : NSObject {

	archiveRef _archive;
	BOOL _hasClosedArchive;
	NSURL* _tarGzUrl;
	NSURL* _sourceDir;

}

@property (retain) NSURL * tarGzUrl;               //@synthesize tarGzUrl=_tarGzUrl - In the implementation block
@property (retain) NSURL * sourceDir;              //@synthesize sourceDir=_sourceDir - In the implementation block
-(archiveRef)archiverForUrl:(id)arg1 ;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
-(BOOL)addFile:(id)arg1 withPathName:(id)arg2 ;
-(NSURL *)tarGzUrl;
-(void)closeArchive;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
@end

