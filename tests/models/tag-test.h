#ifndef TAG_TEST_H
#define TAG_TEST_H

#include "test-suite.h"
#include "models/tag.h"
#include <QSettings>


class TagTest : public TestSuite
{
	Q_OBJECT

	private slots:
		void init();
		void cleanup();

		void testText();
		void testSetText();
		void testCount();
		void testSetCount();
		void testRelated();
		void testSetRelated();
		void testType();
		void testSetType();
		void testShortType();
		void testSetTypeShortType();
		void testStylishedFavorite();
		void testStylishedNotFavorite();
		void testTypedTextGeneral();
		void testTypedTextArtist();

	private:
		QSettings *m_settings;
};

#endif // TAG_TEST_H
