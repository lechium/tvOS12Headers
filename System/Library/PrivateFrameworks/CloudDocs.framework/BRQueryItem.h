/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BRFileObjectID, NSNumber, NSURL, NSMutableDictionary;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _appLibraryID;
	NSString* _parentPath;
	NSString* _logicalName;
	NSString* _physicalName;
	NSString* _bookmarkData;
	BRFileObjectID* _fileObjectID;
	BRFileObjectID* _parentFileObjectID;
	NSNumber* _size;
	NSNumber* _mtime;
	NSNumber* _btime;
	NSNumber* _lastUsedTime;
	NSNumber* _favoriteRank;
	NSNumber* _childItemCount;
	NSURL* _url;
	NSURL* _localRepresentationURL;
	NSNumber* _parentZoneRowID;
	NSNumber* _zoneRowID;
	NSMutableDictionary* _attrs;
	id _replacement;
	SCD_Union_BR4 _flags;
	long long _logicalHandle;
	long long _physicalHandle;
	unsigned long long _parentFileID;
	unsigned short _diffs;
	BOOL _isNetworkOffline;

}

@property (nonatomic,readonly) unsigned short diffs; 
@property (nonatomic,readonly) unsigned br_downloadStatus; 
@property (nonatomic,readonly) unsigned br_uploadStatus; 
@property (nonatomic,readonly) unsigned br_shareOptions; 
@property (nonatomic,readonly) BOOL isInTransfer; 
@property (nonatomic,readonly) BOOL isConflicted; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isSymlink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (assign,nonatomic) BOOL isPreCrash; 
@property (nonatomic,readonly) BOOL isUploadActive; 
@property (nonatomic,readonly) BOOL isDownloadActive; 
@property (nonatomic,readonly) NSNumber * isDownloadRequested; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isTrashed; 
@property (nonatomic,readonly) NSString * appLibraryID; 
@property (nonatomic,readonly) NSString * parentPath; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * physicalName; 
@property (nonatomic,readonly) BRFileObjectID * fileObjectID; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSNumber * mtime; 
@property (nonatomic,readonly) NSNumber * btime; 
@property (nonatomic,readonly) NSNumber * lastUsedTime; 
@property (nonatomic,readonly) NSNumber * favoriteRank; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * localRepresentationURL; 
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) BOOL isNetworkOffline; 
@property (assign,nonatomic) id replacement; 
+(id)askDaemonQueryItemForURL:(id)arg1 andFakeFSEvent:(BOOL)arg2 error:(id*)arg3 ;
+(id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 zoneRowID:(id)arg3 ;
+(id)askDaemonQueryItemForURL:(id)arg1 error:(id*)arg2 ;
+(id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 ;
+(id)containerItemForContainer:(id)arg1 forceScan:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)attributeForName:(id)arg1 ;
-(id)attributesForNames:(id)arg1 ;
-(id)attributeNames;
-(BOOL)isDirectory;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isLive;
-(id)creationDate;
-(BOOL)isDead;
-(BOOL)isUploading;
-(BOOL)isUploaded;
-(id)lastUsedDate;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)isShared;
-(BOOL)isTrashed;
-(id)versionIdentifier;
-(BRFileObjectID *)fileObjectID;
-(BOOL)canMerge:(id)arg1 ;
-(BOOL)isInTransfer;
-(void)setIsNetworkOffline:(BOOL)arg1 ;
-(BOOL)isUploadActive;
-(BOOL)isDownloadActive;
-(void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(void)mergeProgressUpdate:(id)arg1 ;
-(NSString *)logicalName;
-(NSString *)appLibraryID;
-(BOOL)isConflicted;
-(NSNumber *)isDownloadRequested;
-(BOOL)isBRAlias;
-(id)containerDisplayName;
-(NSURL *)localRepresentationURL;
-(id)sharedItemRole;
-(id)parentFileID;
-(id)containerIDIfDesktopOrDocuments;
-(id)ownerNameComponents;
-(id)initWithQueryItem:(id)arg1 ;
-(id)subclassDescription;
-(BOOL)isEqualToQueryItem:(id)arg1 ;
-(void)_mergeURL:(id)arg1 ;
-(void)_mergeAttrs:(id)arg1 ;
-(id)localizedFileNameIfDesktopOrDocuments;
-(id)fp_appContainerBundleIdentifier;
-(BOOL)fp_isContainer;
-(id)childItemCount;
-(BOOL)isMostRecentVersionDownloaded;
-(id)uploadingError;
-(id)downloadingStatus;
-(id)downloadingError;
-(id)hasUnresolvedConflicts;
-(BOOL)isSharedByCurrentUser;
-(id)mostRecentEditorNameComponents;
-(id)sharingPermissions;
-(unsigned short)diffs;
-(NSString *)physicalName;
-(NSNumber *)mtime;
-(NSNumber *)btime;
-(id)tagData;
-(NSNumber *)favoriteRank;
-(BOOL)isNetworkOffline;
-(unsigned)br_downloadStatus;
-(unsigned)br_uploadStatus;
-(unsigned)br_shareOptions;
-(void)markDead;
-(void)clearDiffs;
-(BOOL)isPreCrash;
-(void)setIsPreCrash:(BOOL)arg1 ;
-(BOOL)isSymlink;
-(BOOL)isFinderBookmark;
-(BOOL)isDocument;
-(BOOL)isHiddenExt;
-(id)fp_spotlightDomainIdentifier;
-(id)replacement;
-(void)setReplacement:(id)arg1 ;
-(id)contentModificationDate;
-(BOOL)isDownloaded;
-(NSNumber *)lastUsedTime;
-(void)merge:(id)arg1 ;
-(BOOL)isDownloading;
-(NSString *)parentPath;
-(NSNumber *)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(NSString *)path;
-(NSURL *)url;
-(id)fileSize;
-(id)filePath;
-(id)owner;
@end

