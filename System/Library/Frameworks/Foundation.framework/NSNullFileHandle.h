/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(id)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(int)fileDescriptor;
-(void)writeData:(id)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(void)closeFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
@end

