/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAMovieResolution, NSURL, NSString;

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAMovieResolution * resolution; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)image;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(SAMovieResolution *)resolution;
-(void)setResolution:(SAMovieResolution *)arg1 ;
@end

