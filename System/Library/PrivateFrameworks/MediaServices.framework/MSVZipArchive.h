/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSString, NSMutableArray;

@interface MSVZipArchive : NSObject {

	BOMSysRef _bomsys;
	NSString* _archivePath;
	NSMutableArray* _filesToArchive;

}
-(void)addFileAtPath:(id)arg1 ;
-(BOOL)writeToFileAtPath:(id)arg1 withError:(id*)arg2 ;
-(BOOL)decompressToPath:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
@end

