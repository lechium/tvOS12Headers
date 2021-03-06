/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaItem.h>

@class NSString, TVHKMediaEntityType, NSArray;

@interface TVHKDPAPMediaItem : TVHKMediaItem {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	NSArray* _faces;

}
-(id)faces;
-(id)imageIdentifier;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
-(id)type;
-(id)dimensions;
@end

