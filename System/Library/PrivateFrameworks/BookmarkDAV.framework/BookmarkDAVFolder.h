/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>
#import <libobjc.A.dylib/CoreDAVModifiedContainer.h>
#import <libobjc.A.dylib/CoreDAVAddedContainer.h>
#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>

@class NSDictionary, NSMutableArray, NSURL, NSString, CoreDAVErrorItem, NSArray, NSData;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {

	NSDictionary* _appleAttributes;
	NSMutableArray* _childrenOrder;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSString* _bulkParsedCTag;
	NSString* _bulkParsedPTag;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (nonatomic,retain) NSString * bulkParsedCTag;                           //@synthesize bulkParsedCTag=_bulkParsedCTag - In the implementation block
@property (nonatomic,retain) NSString * bulkParsedPTag;                           //@synthesize bulkParsedPTag=_bulkParsedPTag - In the implementation block
@property (assign,nonatomic) BOOL isBookmarkFolder; 
@property (assign,nonatomic) BOOL isBookmarkBarFolder; 
@property (assign,nonatomic) BOOL isBookmarkMenuFolder; 
@property (nonatomic,readonly) NSDictionary * appleAttributes;                    //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder;                           //@synthesize childrenOrder=_childrenOrder - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * bulkUploadErrorItem;              //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
+(id)copyPropertyMappingsForParser;
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)syncKey;
-(NSArray *)childrenOrder;
-(id)copyMkcolTask;
-(id)copyPropPatchTask;
-(NSData *)dataPayload;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)applyParsedProperties:(id)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(NSDictionary *)appleAttributes;
-(CoreDAVErrorItem *)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg1 ;
-(id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3 ;
-(void)setBulkParsedCTag:(NSString *)arg1 ;
-(void)setBulkParsedPTag:(NSString *)arg1 ;
-(void)_faultResourceType;
-(id)_appleAttributesString;
-(BOOL)isBookmarkFolder;
-(BOOL)isBookmarkBarFolder;
-(BOOL)isBookmarkMenuFolder;
-(void)setIsBookmarkFolder:(BOOL)arg1 ;
-(void)setIsBookmarkBarFolder:(BOOL)arg1 ;
-(void)setIsBookmarkMenuFolder:(BOOL)arg1 ;
-(NSString *)bulkParsedCTag;
-(NSString *)bulkParsedPTag;
-(void)dealloc;
@end

