/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFCloudKitImporterOptions, NSCloudKitMirroringDelegateMetadata, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringDelegateMetadata* _metadata;
	NSCloudKitMirroringImportRequest* _request;

}

@property (nonatomic,readonly) PFCloudKitImporterOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;                  //@synthesize request=_request - In the implementation block
-(id)initWithOptions:(id)arg1 metadata:(id)arg2 request:(id)arg3 ;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(NSCloudKitMirroringDelegateMetadata *)metadata;
-(void)dealloc;
-(PFCloudKitImporterOptions *)options;
-(NSCloudKitMirroringImportRequest *)request;
@end
