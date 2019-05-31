/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKDMMCSItemGroupContext, CKDMMCSItem;


@protocol CKDMMCSItemReaderWriterProtocol <NSObject>
@property (nonatomic,readonly) CKDMMCSItemGroupContext * MMCSRequest; 
@property (nonatomic,readonly) CKDMMCSItem * MMCSItem; 
@required
-(BOOL)openWithError:(id*)arg1;
-(CKDMMCSItemGroupContext *)MMCSRequest;
-(CKDMMCSItem *)MMCSItem;
-(BOOL)closeWithError:(id*)arg1;
-(id)getFileMetadataWithError:(id*)arg1;
-(BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
-(BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end

