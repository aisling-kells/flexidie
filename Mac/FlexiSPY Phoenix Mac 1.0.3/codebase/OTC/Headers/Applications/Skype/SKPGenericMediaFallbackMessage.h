//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKPMessage.h"

@class NSString, NSURL, SKPMediaDocument, UIImage;

@interface SKPGenericMediaFallbackMessage : SKPMessage
{
    _Bool _didLoadDocument;
    SKPMediaDocument *_mediaDocument;
}

+ (id)keyPathsForValuesAffectingDocumentType;
+ (id)keyPathsForValuesAffectingWebURL;
+ (id)keyPathsForValuesAffectingBodyText;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingThumbnailURL;
+ (id)keyPathsForValuesAffectingThumbnailImage;
+ (id)keyPathsForValuesAffectingTrustType;
@property(nonatomic) _Bool didLoadDocument; // @synthesize didLoadDocument=_didLoadDocument;
@property(retain, nonatomic) SKPMediaDocument *mediaDocument; // @synthesize mediaDocument=_mediaDocument;

- (id)otherPropertyKeysToIncludeInDebugDescription;
- (id)attributedSummary;
@property(readonly, nonatomic) unsigned long long documentType;
@property(readonly, nonatomic) NSURL *webURL;
@property(readonly, copy, nonatomic) NSString *bodyText;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *thumbnailURL;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) unsigned long long trustType;
- (void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(_Bool)arg3;
- (long long)type;

@end

