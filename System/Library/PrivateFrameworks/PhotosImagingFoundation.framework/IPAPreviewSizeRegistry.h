/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {

	NSString* _name;
	NSMutableDictionary* _policies;

}
-(void)addPolicy:(id)arg1 ;
-(id)policyForStyle:(unsigned long long)arg1 ;
-(id)policyForStyleObject:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
@end
