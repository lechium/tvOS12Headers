/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {

	NSString* _path;
	NSString* _filename;
	NSString* _preferredFilename;
	NSData* _data;
	NSMutableDictionary* _attributes;
	NSString* _linkDestination;
	NSString* _url;
	int _type;

}
-(BOOL)isDirectory;
-(id)fileAttributes;
-(id)initRegularFileWithContents:(id)arg1 ;
-(void)setPreferredFilename:(id)arg1 ;
-(id)fileWrappers;
-(BOOL)isSymbolicLink;
-(void)setFileAttributes:(id)arg1 ;
-(id)filename;
-(void)setFilename:(id)arg1 ;
-(id)messageID;
-(void)setCreator:(unsigned)arg1 ;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2 ;
-(void)setFileProtection:(id)arg1 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(unsigned short)finderFlags;
-(void)setEventUniqueID:(id)arg1 ;
-(id)eventUniqueID;
-(void)setMeetingStorePersistentID:(id)arg1 ;
-(void)setICSRepresentation:(id)arg1 ;
-(id)icsRepresentation;
-(id)fileProtection;
-(BOOL)isPDFFile;
-(BOOL)isUnzippableFile;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
-(BOOL)isImageFile;
-(id)symbolicLinkDestination;
-(id)meetingStorePersistentID;
-(void)setMimeType:(id)arg1 ;
-(id)inferredMimeType;
-(void)setMessageID:(id)arg1 ;
-(unsigned)creator;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(id)path;
-(void)setPath:(id)arg1 ;
-(unsigned long long)fileSize;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(BOOL)isRegularFile;
-(id)regularFileContents;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)preferredFilename;
-(id)mimeType;
@end
