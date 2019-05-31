/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaLibraryIdentifier.h>

@class NSURL, NSString;

@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier> {

	NSURL* _libraryFileURL;

}

@property (nonatomic,copy) NSURL * libraryFileURL;                  //@synthesize libraryFileURL=_libraryFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)libraryFileURL;
-(void)setLibraryFileURL:(NSURL *)arg1 ;
@end

