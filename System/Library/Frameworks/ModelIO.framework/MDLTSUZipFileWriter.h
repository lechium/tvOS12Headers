/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLTSUZipWriter.h>

@protocol MDLTSURandomWriteChannel;
@interface MDLTSUZipFileWriter : MDLTSUZipWriter {

	id<MDLTSURandomWriteChannel> _writeChannel;
	/*^block*/id _writeChannelCompletionHandler;

}
+(void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
+(void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithZipFileArchive:(id)arg1 error:(id*)arg2 ;
-(void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(void)truncateToOffsetImpl:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
@end

