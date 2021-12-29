#ifndef org_apache_lucene_search_spell_SpellChecker_H
#define org_apache_lucene_search_spell_SpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
          class SuggestMode;
          class StringDistance;
          class Dictionary;
        }
      }
      namespace index {
        class IndexReader;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
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
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class SpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c51fd9fb1cf0392d,
              mid_init$_8c2a08c751951193,
              mid_init$_177b7a316167e81d,
              mid_clearIndex_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_exist_145b2d0af0c06b93,
              mid_getAccuracy_58aec2b64dff50c8,
              mid_getComparator_beb0414e0ec1de00,
              mid_getStringDistance_2012a1536a00ef81,
              mid_indexDictionary_6ccbc29818d74b60,
              mid_setAccuracy_8e1d952dd65cdc3a,
              mid_setComparator_4703504c5d45d50f,
              mid_setSpellIndex_c51fd9fb1cf0392d,
              mid_setStringDistance_96537eb7f43eebe7,
              mid_suggestSimilar_5ba731fecfe18cb8,
              mid_suggestSimilar_a2929ffd888e3abb,
              mid_suggestSimilar_8d9000e391e6186e,
              mid_suggestSimilar_3ce1f307517de4e4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpellChecker(const SpellChecker& obj) : ::java::lang::Object(obj) {}

            static jfloat DEFAULT_ACCURACY;
            static ::java::lang::String *F_WORD;

            SpellChecker(const ::org::apache::lucene::store::Directory &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &, const ::java::util::Comparator &);

            void clearIndex() const;
            void close() const;
            jboolean exist(const ::java::lang::String &) const;
            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getStringDistance() const;
            void indexDictionary(const ::org::apache::lucene::search::spell::Dictionary &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean) const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setSpellIndex(const ::org::apache::lucene::store::Directory &) const;
            void setStringDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, jfloat) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(SpellChecker);
          extern PyTypeObject *PY_TYPE(SpellChecker);

          class t_SpellChecker {
          public:
            PyObject_HEAD
            SpellChecker object;
            static PyObject *wrap_Object(const SpellChecker&);
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
