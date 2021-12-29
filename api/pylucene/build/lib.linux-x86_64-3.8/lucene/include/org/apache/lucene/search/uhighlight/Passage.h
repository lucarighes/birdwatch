#ifndef org_apache_lucene_search_uhighlight_Passage_H
#define org_apache_lucene_search_uhighlight_Passage_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class Passage : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_addMatch_835b93aaa6ddd6b0,
              mid_getEndOffset_9972fcc56b44e79d,
              mid_getLength_9972fcc56b44e79d,
              mid_getMatchEnds_d2c45ef07a322466,
              mid_getMatchStarts_d2c45ef07a322466,
              mid_getMatchTermFreqsInDoc_d2c45ef07a322466,
              mid_getMatchTerms_af55d198d80d9d7e,
              mid_getNumMatches_9972fcc56b44e79d,
              mid_getScore_58aec2b64dff50c8,
              mid_getStartOffset_9972fcc56b44e79d,
              mid_reset_f2cc1bce94666404,
              mid_setEndOffset_040c4cd0390c5aff,
              mid_setScore_8e1d952dd65cdc3a,
              mid_setStartOffset_040c4cd0390c5aff,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Passage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Passage(const Passage& obj) : ::java::lang::Object(obj) {}

            Passage();

            void addMatch(jint, jint, const ::org::apache::lucene::util::BytesRef &, jint) const;
            jint getEndOffset() const;
            jint getLength() const;
            JArray< jint > getMatchEnds() const;
            JArray< jint > getMatchStarts() const;
            JArray< jint > getMatchTermFreqsInDoc() const;
            JArray< ::org::apache::lucene::util::BytesRef > getMatchTerms() const;
            jint getNumMatches() const;
            jfloat getScore() const;
            jint getStartOffset() const;
            void reset() const;
            void setEndOffset(jint) const;
            void setScore(jfloat) const;
            void setStartOffset(jint) const;
            ::java::lang::String toString() const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(Passage);
          extern PyTypeObject *PY_TYPE(Passage);

          class t_Passage {
          public:
            PyObject_HEAD
            Passage object;
            static PyObject *wrap_Object(const Passage&);
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
