#ifndef org_apache_lucene_search_spell_DirectSpellChecker_H
#define org_apache_lucene_search_spell_DirectSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
          class SuggestMode;
          class StringDistance;
        }
      }
      namespace index {
        class IndexReader;
        class Term;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class DirectSpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getAccuracy_58aec2b64dff50c8,
              mid_getComparator_beb0414e0ec1de00,
              mid_getDistance_2012a1536a00ef81,
              mid_getLowerCaseTerms_8454bd5aa23fd11e,
              mid_getMaxEdits_9972fcc56b44e79d,
              mid_getMaxInspections_9972fcc56b44e79d,
              mid_getMaxQueryFrequency_58aec2b64dff50c8,
              mid_getMaxQueryLength_9972fcc56b44e79d,
              mid_getMinPrefix_9972fcc56b44e79d,
              mid_getMinQueryLength_9972fcc56b44e79d,
              mid_getThresholdFrequency_58aec2b64dff50c8,
              mid_setAccuracy_8e1d952dd65cdc3a,
              mid_setComparator_4703504c5d45d50f,
              mid_setDistance_96537eb7f43eebe7,
              mid_setLowerCaseTerms_9d72768e8fdce2b7,
              mid_setMaxEdits_040c4cd0390c5aff,
              mid_setMaxInspections_040c4cd0390c5aff,
              mid_setMaxQueryFrequency_8e1d952dd65cdc3a,
              mid_setMaxQueryLength_040c4cd0390c5aff,
              mid_setMinPrefix_040c4cd0390c5aff,
              mid_setMinQueryLength_040c4cd0390c5aff,
              mid_setThresholdFrequency_8e1d952dd65cdc3a,
              mid_suggestSimilar_cde54658a5b84fb9,
              mid_suggestSimilar_8277a15a889f7302,
              mid_suggestSimilar_6e7c192f2a3538f8,
              mid_suggestSimilar_78be369e2080aa54,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectSpellChecker(const DirectSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::spell::StringDistance *INTERNAL_LEVENSHTEIN;

            DirectSpellChecker();

            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getDistance() const;
            jboolean getLowerCaseTerms() const;
            jint getMaxEdits() const;
            jint getMaxInspections() const;
            jfloat getMaxQueryFrequency() const;
            jint getMaxQueryLength() const;
            jint getMinPrefix() const;
            jint getMinQueryLength() const;
            jfloat getThresholdFrequency() const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            void setLowerCaseTerms(jboolean) const;
            void setMaxEdits(jint) const;
            void setMaxInspections(jint) const;
            void setMaxQueryFrequency(jfloat) const;
            void setMaxQueryLength(jint) const;
            void setMinPrefix(jint) const;
            void setMinQueryLength(jint) const;
            void setThresholdFrequency(jfloat) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(DirectSpellChecker);
          extern PyTypeObject *PY_TYPE(DirectSpellChecker);

          class t_DirectSpellChecker {
          public:
            PyObject_HEAD
            DirectSpellChecker object;
            static PyObject *wrap_Object(const DirectSpellChecker&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
