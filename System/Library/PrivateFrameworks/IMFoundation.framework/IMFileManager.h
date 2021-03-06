/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
+(id)defaultHFSFileManager;
+(id)defaultManager;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)UTITypeOfMimeType:(id)arg1 ;
-(id)UTITypeOfPathExtension:(id)arg1 ;
-(id)pathExtensionForUTIType:(id)arg1 ;
-(id)pathExtensionForMIMEType:(id)arg1 ;
-(id)UTITypeOfPath:(id)arg1 ;
-(id)MIMETypeOfPath:(id)arg1 ;
-(id)MIMETypeOfPathExtension:(id)arg1 ;
-(id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2 ;
@end

